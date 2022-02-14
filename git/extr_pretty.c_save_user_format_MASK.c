
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev_info {int use_terminator; int commit_format; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static void FUNC_2(struct rev_info *VAR_2, const char *VAR_3, int VAR_4)
{
 FUNC_0(VAR_1);
 VAR_1 = FUNC_1(VAR_3);
 if (VAR_4)
  VAR_2->use_terminator = 1;
 VAR_2->commit_format = VAR_0;
}
