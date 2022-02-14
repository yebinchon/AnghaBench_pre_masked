
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ timestamp_t ;
struct strbuf {int dummy; } ;


 int FUNC_0 (struct strbuf*,char*,scalar_t__) ;
 int FUNC_1 (struct strbuf*,char*,char*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct strbuf *VAR_0)
{
 timestamp_t VAR_1 = FUNC_2(((void*)0));
 FUNC_0(VAR_0, "Date", VAR_1);
 FUNC_0(VAR_0, "Expires", VAR_1 + 31536000);
 FUNC_1(VAR_0, "Cache-Control", "public, max-age=31536000");
}
