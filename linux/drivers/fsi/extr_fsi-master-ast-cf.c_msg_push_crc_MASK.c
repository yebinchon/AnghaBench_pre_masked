
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct fsi_msg {int bits; int msg; } ;


 scalar_t__ FUNC_0 (scalar_t__,int,int) ;
 int FUNC_1 (struct fsi_msg*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct fsi_msg *VAR_0)
{
 uint8_t VAR_1;
 int VAR_2;

 VAR_2 = VAR_0->bits & 0x3;


 VAR_1 = FUNC_0(0, 1 << VAR_2 | VAR_0->msg >> (VAR_0->bits - VAR_2), VAR_2 + 1);


 VAR_1 = FUNC_0(VAR_1, VAR_0->msg, VAR_0->bits - VAR_2);

 FUNC_1(VAR_0, VAR_1, 4);
}
