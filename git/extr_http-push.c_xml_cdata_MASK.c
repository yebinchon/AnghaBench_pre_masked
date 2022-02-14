
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xml_ctx {int cdata; } ;
typedef int XML_Char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, const XML_Char *VAR_1, int VAR_2)
{
 struct xml_ctx *VAR_3 = (struct xml_ctx *)VAR_0;
 FUNC_0(VAR_3->cdata);
 VAR_3->cdata = FUNC_1(VAR_1, VAR_2);
}
