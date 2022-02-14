
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct message {int m_offset; int m_block; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ,int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int ) ;

FILE *
FUNC_4(struct message *VAR_3)
{

 (void)FUNC_1(VAR_2);
 if (FUNC_2(VAR_1,
     FUNC_3(VAR_3->m_block, VAR_3->m_offset), VAR_0) < 0)
  FUNC_0(1, "fseeko");
 return (VAR_1);
}
