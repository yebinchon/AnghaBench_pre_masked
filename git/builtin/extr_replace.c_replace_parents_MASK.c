
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {char* buf; int len; } ;
struct object_id {int dummy; } ;
struct TYPE_3__ {int oid; } ;
struct commit {TYPE_1__ object; } ;
struct TYPE_4__ {unsigned int hexsz; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,struct object_id*) ;
 struct commit* FUNC_3 (int ,struct object_id*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 int FUNC_6 (struct strbuf*,char*,int ) ;
 int FUNC_7 (struct strbuf*) ;
 int FUNC_8 (struct strbuf*,int,int,char const*,int ) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_9(struct strbuf *VAR_3, int VAR_4, const char **VAR_5)
{
 struct strbuf VAR_6 = VAR_0;
 const char *VAR_7, *VAR_8;
 int VAR_9;
 const unsigned VAR_10 = VAR_1->hexsz;


 VAR_7 = VAR_3->buf;
 VAR_7 += VAR_10 + 6;
 VAR_8 = VAR_7;

 while (FUNC_5(VAR_8, "parent "))
  VAR_8 += VAR_10 + 8;


 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  struct object_id VAR_11;
  struct commit *VAR_12;

  if (FUNC_2(VAR_5[VAR_9], &VAR_11) < 0) {
   FUNC_7(&VAR_6);
   return FUNC_1(FUNC_0("not a valid object name: '%s'"),
         VAR_5[VAR_9]);
  }
  VAR_12 = FUNC_3(VAR_2, &VAR_11);
  if (!VAR_12) {
   FUNC_7(&VAR_6);
   return FUNC_1(FUNC_0("could not parse %s as a commit"), VAR_5[VAR_9]);
  }
  FUNC_6(&VAR_6, "parent %s\n", FUNC_4(&VAR_12->object.oid));
 }


 FUNC_8(VAR_3, VAR_7 - VAR_3->buf, VAR_8 - VAR_7,
        VAR_6.buf, VAR_6.len);

 FUNC_7(&VAR_6);
 return 0;
}
