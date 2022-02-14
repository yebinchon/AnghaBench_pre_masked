
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct ref_format {int dummy; } ;
struct TYPE_11__ {int * contentp; } ;
struct TYPE_15__ {int content; TYPE_2__ info; } ;
struct TYPE_10__ {int * contentp; } ;
struct TYPE_14__ {int content; TYPE_1__ info; } ;
struct TYPE_13__ {char* name; scalar_t__ source; int u; int type; } ;
struct TYPE_12__ {char* name; scalar_t__ source; scalar_t__ (* parser ) (struct ref_format const*,TYPE_4__*,char const*,struct strbuf*) ;int cmp_type; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 char* FUNC_4 (char const*,char,int) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (int *,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_7__ VAR_4 ;
 TYPE_6__ VAR_5 ;
 int FUNC_7 (struct strbuf*,int,int ,int,char const*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct ref_format const*,TYPE_4__*,char const*,struct strbuf*) ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 char* FUNC_11 (char const*,int) ;

__attribute__((used)) static int FUNC_12(const struct ref_format *VAR_9,
     const char *VAR_10, const char *VAR_11,
     struct strbuf *VAR_12)
{
 const char *VAR_13;
 const char *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 VAR_13 = VAR_10;
 if (*VAR_13 == '*' && VAR_13 < VAR_11)
  VAR_13++;
 if (VAR_11 <= VAR_13)
  return FUNC_7(VAR_12, -1, FUNC_2("malformed field name: %.*s"),
           (int)(VAR_11-VAR_10), VAR_10);


 for (VAR_15 = 0; VAR_15 < VAR_7; VAR_15++) {
  int VAR_18 = FUNC_9(VAR_6[VAR_15].name);
  if (VAR_18 == VAR_11 - VAR_10 && !FUNC_5(VAR_6[VAR_15].name, VAR_10, VAR_18))
   return VAR_15;
 }







 VAR_14 = FUNC_4(VAR_13, ':', VAR_11 - VAR_13);
 VAR_17 = (VAR_14 ? VAR_14 : VAR_11) - VAR_13;


 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_8); VAR_15++) {
  int VAR_19 = FUNC_9(VAR_8[VAR_15].name);
  if (VAR_19 == VAR_17 && !FUNC_5(VAR_8[VAR_15].name, VAR_13, VAR_19))
   break;
 }

 if (FUNC_0(VAR_8) <= VAR_15)
  return FUNC_7(VAR_12, -1, FUNC_2("unknown field name: %.*s"),
           (int)(VAR_11-VAR_10), VAR_10);
 if (VAR_8[VAR_15].source != VAR_0 && !FUNC_3())
  return FUNC_7(VAR_12, -1,
           FUNC_2("not a git repository, but the field '%.*s' requires access to object data"),
           (int)(VAR_11-VAR_10), VAR_10);


 VAR_16 = VAR_7;
 VAR_7++;
 FUNC_1(VAR_6, VAR_7);
 VAR_6[VAR_16].name = FUNC_11(VAR_10, VAR_11 - VAR_10);
 VAR_6[VAR_16].type = VAR_8[VAR_15].cmp_type;
 VAR_6[VAR_16].source = VAR_8[VAR_15].source;
 if (VAR_6[VAR_16].source == VAR_1) {
  if (*VAR_10 == '*')
   VAR_5.info.contentp = &VAR_5.content;
  else
   VAR_4.info.contentp = &VAR_4.content;
 }
 if (VAR_14) {
  VAR_14 = VAR_6[VAR_16].name + (VAR_14 - VAR_10) + 1;
  if (!*VAR_14) {




   VAR_14 = ((void*)0);
  }
 }
 FUNC_6(&VAR_6[VAR_16].u, 0, sizeof(VAR_6[VAR_16].u));
 if (VAR_8[VAR_15].parser && VAR_8[VAR_15].parser(VAR_9, &VAR_6[VAR_16], VAR_14, VAR_12))
  return -1;
 if (*VAR_10 == '*')
  VAR_3 = 1;
 if (!FUNC_8(VAR_8[VAR_15].name, "symref"))
  VAR_2 = 1;
 return VAR_16;
}
