
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef struct strbuf {char const* buf; } const strbuf ;
struct object {int oid; } ;
struct TYPE_2__ {int object_names; } ;


 int FUNC_0 (struct strbuf const*) ;

 TYPE_1__ VAR_0 ;
 char* FUNC_1 (int ,struct object*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct strbuf const*,char*,char*) ;
 int FUNC_4 (struct strbuf const*,int ) ;
 int FUNC_5 (struct strbuf const*) ;

__attribute__((used)) static const char *FUNC_6(struct object *VAR_2)
{
 static struct strbuf VAR_3[] = {
  128, 128, 128, 128
 };
 static int VAR_4 = 0;
 struct strbuf *VAR_5;
 char *VAR_6 = ((void*)0);

 if (VAR_1)
  VAR_6 = FUNC_1(VAR_0.object_names, VAR_2);

 VAR_5 = VAR_3 + VAR_4;
 VAR_4 = (VAR_4 + 1) % FUNC_0(VAR_3);
 FUNC_5(VAR_5);
 FUNC_4(VAR_5, FUNC_2(&VAR_2->oid));
 if (VAR_6)
  FUNC_3(VAR_5, " (%s)", VAR_6);

 return VAR_5->buf;
}
