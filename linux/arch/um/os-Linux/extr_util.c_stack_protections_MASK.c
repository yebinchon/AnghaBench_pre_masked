
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (void*,int ,int) ;
 int FUNC_1 (char*,int ) ;

void FUNC_2(unsigned long VAR_5)
{
 if (FUNC_0((void *) VAR_5, VAR_3,
      VAR_1 | VAR_2 | VAR_0) < 0)
  FUNC_1("protecting stack failed, errno = %d", VAR_4);
}
