
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (int ,unsigned long,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (void*,...) ;

__attribute__((used)) static inline void FUNC_2(void)
{
 volatile unsigned char *VAR_5, VAR_6;
 char VAR_7[0x80];
 extern char VAR_8;


 FUNC_1(&VAR_7, (void *)(VAR_2 + 0x80), 0x80);
 FUNC_1((void *)(VAR_2 + 0x80), &VAR_8, 0x80);






 for (VAR_5 = (unsigned char *)VAR_3 + VAR_1;
      VAR_4 == 0 && VAR_5 < (unsigned char *)VAR_3 + 0x1e00000;
      VAR_5 += VAR_1) {
  VAR_6 = *VAR_5;
 }
 FUNC_1((void *)(VAR_2 + 0x80), &VAR_7, 0x80);

 FUNC_0(0, (unsigned long)VAR_5 - VAR_3 - VAR_1,
     VAR_0);
}
