
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offset; scalar_t__ time; } ;
struct TYPE_5__ {char* name; char* email; TYPE_1__ when; } ;
typedef TYPE_2__ git_signature ;


 int FUNC_0 (char*,char const*,char*,char*,long,char,int,int) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, const git_signature *VAR_1)
{
 char VAR_2;
 int VAR_3, VAR_4, VAR_5;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->when.offset;
 if (VAR_3 < 0) {
  VAR_2 = '-';
  VAR_3 = -VAR_3;
 } else {
  VAR_2 = '+';
 }

 VAR_4 = VAR_3 / 60;
 VAR_5 = VAR_3 % 60;

 FUNC_0("%s %s <%s> %ld %c%02d%02d\n",
     VAR_0, VAR_1->name, VAR_1->email, (long)VAR_1->when.time,
     VAR_2, VAR_4, VAR_5);
}
