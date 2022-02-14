
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct fsi_msg {int msg; unsigned int bits; } ;
struct fsi_master_acf {scalar_t__ sram; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct fsi_master_acf*,unsigned int) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (struct fsi_master_acf*,struct fsi_msg*,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct fsi_master_acf *VAR_4, struct fsi_msg *VAR_5,
   unsigned int VAR_6)
{
 uint32_t VAR_7;

 FUNC_2(VAR_4, VAR_5, VAR_6);


 FUNC_1((VAR_5->msg >> 32), VAR_4->sram + VAR_1);
 FUNC_1((VAR_5->msg & 0xffffffff), VAR_4->sram + VAR_1 + 4);

 VAR_7 = VAR_0;
 VAR_7 |= VAR_5->bits << VAR_2;
 if (VAR_6)
  VAR_7 |= VAR_6 << VAR_3;

 return FUNC_0(VAR_4, VAR_7);
}
