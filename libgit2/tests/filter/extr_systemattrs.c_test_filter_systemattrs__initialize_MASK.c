
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 TYPE_1__ VAR_3 ;

void FUNC_7(void)
{
 VAR_2 = FUNC_2("crlf");
 FUNC_3(FUNC_6("crlf/.gitattributes"));

 FUNC_1(FUNC_5(
  VAR_1, VAR_0, &VAR_3));
 FUNC_1(FUNC_4(&VAR_3,
  VAR_3.ptr, "gitattributes"));

 FUNC_0(VAR_3.ptr,
  "*.txt text\n"
  "*.bin binary\n"
  "*.crlf text eol=crlf\n"
  "*.lf text eol=lf\n");
}
