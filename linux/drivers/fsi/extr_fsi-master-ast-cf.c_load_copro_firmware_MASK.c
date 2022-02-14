
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
typedef int const u8 ;
struct fsi_master_acf {scalar_t__ gpio_clk_vreg; scalar_t__ gpio_dat_vreg; size_t cf_mem_size; int cf_mem; int dev; } ;
struct firmware {int size; int const* data; } ;
typedef int __be32 ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,char*,int,...) ;
 int FUNC_4 (int ,int const*,size_t) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,size_t,int ) ;

__attribute__((used)) static int FUNC_7(struct fsi_master_acf *VAR_8)
{
 const struct firmware *VAR_9;
 uint16_t VAR_10 = 0, VAR_11;
 const u8 *VAR_12;
 size_t VAR_13 = 0;
 int VAR_14;


 VAR_14 = FUNC_6(&VAR_9, VAR_2, VAR_8->dev);
 if (VAR_14) {
  FUNC_3(
   VAR_8->dev, "Error %d to load firwmare '%s' !\n",
   VAR_14, VAR_2);
  return VAR_14;
 }


 if (VAR_8->gpio_clk_vreg == VAR_8->gpio_dat_vreg)
  VAR_11 = VAR_6;
 else
  VAR_11 = VAR_7;
 FUNC_2(VAR_8->dev, "Looking for image sig %04x\n", VAR_11);


 for (VAR_12 = VAR_9->data; VAR_12 < (VAR_9->data + VAR_9->size);) {
  VAR_10 = FUNC_0((__be16 *)(VAR_12 + VAR_4 + VAR_5));
  VAR_13 = FUNC_1((__be32 *)(VAR_12 + VAR_4 + VAR_3));
  if (VAR_10 == VAR_11)
   break;
  VAR_12 += VAR_13;
 }
 if (VAR_10 != VAR_11) {
  FUNC_3(VAR_8->dev, "Failed to locate image sig %04x in FW blob\n",
   VAR_11);
  VAR_14 = -VAR_0;
  goto release_fw;
 }
 if (VAR_13 > VAR_8->cf_mem_size) {
  FUNC_3(VAR_8->dev, "FW size (%zd) bigger than memory reserve (%zd)\n",
   VAR_9->size, VAR_8->cf_mem_size);
  VAR_14 = -VAR_1;
 } else {
  FUNC_4(VAR_8->cf_mem, VAR_12, VAR_13);
 }

release_fw:
 FUNC_5(VAR_9);
 return VAR_14;
}
