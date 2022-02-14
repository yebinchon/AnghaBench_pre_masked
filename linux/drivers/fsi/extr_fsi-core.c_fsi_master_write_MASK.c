
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct fsi_master {int (* write ) (struct fsi_master*,int,int ,int ,void const*,size_t) ;} ;


 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (struct fsi_master*,int,int ,int ,void const*,size_t) ;
 int FUNC_2 (struct fsi_master*,int,int ,int ,size_t,int,void const*,int) ;
 int FUNC_3 (struct fsi_master*,int,int ,int ,size_t,void const*) ;

__attribute__((used)) static int FUNC_4(struct fsi_master *VAR_0, int VAR_1,
  uint8_t VAR_2, uint32_t VAR_3, const void *VAR_4, size_t VAR_5)
{
 int VAR_6;

 FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5, VAR_4);

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (!VAR_6)
  VAR_6 = VAR_0->write(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_5,
   1, VAR_4, VAR_6);

 return VAR_6;
}
