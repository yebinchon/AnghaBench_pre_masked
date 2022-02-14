
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int nr; } ;
struct column_options {char* indent; char* nl; int padding; int width; } ;
typedef int nopts ;


 int FUNC_0 (char*,int) ;
 unsigned int VAR_0 ;

 unsigned int VAR_1 ;
 int FUNC_1 (unsigned int) ;


 int FUNC_2 (int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (struct string_list const*,char*,char*) ;
 int FUNC_5 (struct string_list const*,unsigned int,struct column_options*) ;
 int FUNC_6 (struct column_options*,int ,int) ;
 int FUNC_7 () ;

void FUNC_8(const struct string_list *VAR_2, unsigned int VAR_3,
     const struct column_options *VAR_4)
{
 struct column_options VAR_5;

 if (!VAR_2->nr)
  return;
 FUNC_2((VAR_3 & VAR_1) != VAR_0);

 FUNC_6(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.indent = VAR_4 && VAR_4->indent ? VAR_4->indent : "";
 VAR_5.nl = VAR_4 && VAR_4->nl ? VAR_4->nl : "\n";
 VAR_5.padding = VAR_4 ? VAR_4->padding : 1;
 VAR_5.width = VAR_4 && VAR_4->width ? VAR_4->width : FUNC_7() - 1;
 if (!FUNC_3(VAR_3)) {
  FUNC_4(VAR_2, "", "\n");
  return;
 }
 switch (FUNC_1(VAR_3)) {
 case 129:
  FUNC_4(VAR_2, VAR_5.indent, VAR_5.nl);
  break;
 case 128:
 case 130:
  FUNC_5(VAR_2, VAR_3, &VAR_5);
  break;
 default:
  FUNC_0("invalid layout mode %d", FUNC_1(VAR_3));
 }
}
