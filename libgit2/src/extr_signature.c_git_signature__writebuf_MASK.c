
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; char sign; scalar_t__ time; } ;
struct TYPE_5__ {TYPE_1__ when; int email; int name; } ;
typedef TYPE_2__ git_signature ;
typedef int git_buf ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,char const*,int ,int ,unsigned int,char,int,int) ;

void FUNC_2(git_buf *VAR_0, const char *VAR_1, const git_signature *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;
 char VAR_6;

 FUNC_0(VAR_0 && VAR_2);

 VAR_3 = VAR_2->when.offset;
 VAR_6 = (VAR_2->when.offset < 0 || VAR_2->when.sign == '-') ? '-' : '+';

 if (VAR_3 < 0)
  VAR_3 = -VAR_3;

 VAR_4 = VAR_3 / 60;
 VAR_5 = VAR_3 % 60;

 FUNC_1(VAR_0, "%s%s <%s> %u %c%02d%02d\n",
   VAR_1 ? VAR_1 : "", VAR_2->name, VAR_2->email,
   (unsigned)VAR_2->when.time, VAR_6, VAR_4, VAR_5);
}
