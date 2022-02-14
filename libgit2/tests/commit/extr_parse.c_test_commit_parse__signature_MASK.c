
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int offset; scalar_t__ time; } ;
struct git_signature {int email; int name; int member_0; TYPE_1__ when; } ;
struct TYPE_7__ {char* string; int offset; scalar_t__ time; int email; int name; int header; } ;
typedef TYPE_2__ passing_signature_test_case ;
typedef struct git_signature git_signature ;
struct TYPE_8__ {char* string; int header; } ;
typedef TYPE_3__ failing_signature_test_case ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct git_signature*,char const**,char const*,int ,char) ;
 TYPE_2__* VAR_1 ;
 size_t FUNC_6 (char*) ;

void FUNC_7(void)
{
 passing_signature_test_case *VAR_2;
 failing_signature_test_case *VAR_3;

 for (VAR_2 = VAR_1; VAR_2->string != ((void*)0); VAR_2++)
 {
  const char *VAR_4 = VAR_2->string;
  size_t VAR_5 = FUNC_6(VAR_2->string);
  struct git_signature VAR_6 = {0};

  FUNC_3(FUNC_5(&VAR_6, &VAR_4, VAR_4 + VAR_5, VAR_2->header, '\n'));
  FUNC_1(VAR_2->name, VAR_6.name);
  FUNC_1(VAR_2->email, VAR_6.email);
  FUNC_0((int)VAR_2->time, (int)VAR_6.when.time);
  FUNC_0(VAR_2->offset, VAR_6.when.offset);
  FUNC_4(VAR_6.name); FUNC_4(VAR_6.email);
 }

 for (VAR_3 = VAR_0; VAR_3->string != ((void*)0); VAR_3++)
 {
  const char *VAR_7 = VAR_3->string;
  size_t VAR_8 = FUNC_6(VAR_3->string);
  git_signature VAR_9 = {0};
  FUNC_2(FUNC_5(&VAR_9, &VAR_7, VAR_7 + VAR_8, VAR_3->header, '\n'));
  FUNC_4(VAR_9.name); FUNC_4(VAR_9.email);
 }
}
