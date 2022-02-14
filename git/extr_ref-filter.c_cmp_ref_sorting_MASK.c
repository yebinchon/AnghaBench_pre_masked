
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct strbuf {int buf; } ;
struct ref_sorting {size_t atom; scalar_t__ reverse; scalar_t__ version; scalar_t__ ignore_case; } ;
struct ref_array_item {char const* refname; } ;
struct atom_value {char const* s; scalar_t__ value; } ;
typedef scalar_t__ cmp_type ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct ref_array_item*,size_t,struct atom_value**,struct strbuf*) ;
 int FUNC_2 (struct strbuf*) ;
 int FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*,char const*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (char const*,char const*) ;

__attribute__((used)) static int FUNC_6(struct ref_sorting *VAR_3, struct ref_array_item *VAR_4, struct ref_array_item *VAR_5)
{
 struct atom_value *VAR_6, *VAR_7;
 int VAR_8;
 cmp_type VAR_9 = VAR_2[VAR_3->atom].type;
 int (*VAR_10)(const char *, const char *);
 struct strbuf VAR_11 = VAR_1;

 if (FUNC_1(VAR_4, VAR_3->atom, &VAR_6, &VAR_11))
  FUNC_0("%s", VAR_11.buf);
 if (FUNC_1(VAR_5, VAR_3->atom, &VAR_7, &VAR_11))
  FUNC_0("%s", VAR_11.buf);
 FUNC_2(&VAR_11);
 VAR_10 = VAR_3->ignore_case ? FUNC_3 : FUNC_4;
 if (VAR_3->version)
  VAR_8 = FUNC_5(VAR_6->s, VAR_7->s);
 else if (VAR_9 == VAR_0)
  VAR_8 = VAR_10(VAR_6->s, VAR_7->s);
 else {
  if (VAR_6->value < VAR_7->value)
   VAR_8 = -1;
  else if (VAR_6->value == VAR_7->value)
   VAR_8 = VAR_10(VAR_4->refname, VAR_5->refname);
  else
   VAR_8 = 1;
 }

 return (VAR_3->reverse) ? -VAR_8 : VAR_8;
}
