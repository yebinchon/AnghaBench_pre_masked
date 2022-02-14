
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_qm {scalar_t__ io_base; } ;
typedef enum vft_type { ____Placeholder_vft_type } vft_type ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (struct hisi_qm*,int,int,int) ;
 int FUNC_2 (scalar_t__,unsigned int,unsigned int,int,int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hisi_qm *VAR_5, enum vft_type VAR_6,
        u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_5->io_base + VAR_3, VAR_10,
      VAR_10 & FUNC_0(0), 10, 1000);
 if (VAR_11)
  return VAR_11;

 FUNC_3(0x0, VAR_5->io_base + VAR_2);
 FUNC_3(VAR_6, VAR_5->io_base + VAR_4);
 FUNC_3(VAR_7, VAR_5->io_base + VAR_0);

 FUNC_1(VAR_5, VAR_6, VAR_8, VAR_9);

 FUNC_3(0x0, VAR_5->io_base + VAR_3);
 FUNC_3(0x1, VAR_5->io_base + VAR_1);

 return FUNC_2(VAR_5->io_base + VAR_3, VAR_10,
       VAR_10 & FUNC_0(0), 10, 1000);
}
