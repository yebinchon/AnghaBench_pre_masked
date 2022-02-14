
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mixer_context {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct mixer_context*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct mixer_context *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5 = VAR_4 >> 8;
 u32 VAR_6 = 0;

 if (VAR_4 != VAR_0) {
  VAR_6 |= VAR_2;
  VAR_6 |= VAR_5;
 }
 FUNC_0(VAR_3, VAR_1, VAR_6);
}
