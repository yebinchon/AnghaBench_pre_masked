
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct object_id {int dummy; } ;
struct index_state {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct index_state*,char const*,int,struct strbuf*,int ) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int ,struct object_id*) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (int ) ;
 char const* FUNC_6 (struct index_state*,char const*) ;
 int FUNC_7 (int ,int ,int ,struct object_id*) ;

__attribute__((used)) static int FUNC_8(struct index_state *VAR_3,
         struct object_id *VAR_4,
         int VAR_5,
         const char *VAR_6,
         unsigned VAR_7)
{
 int VAR_8;
 const int VAR_9 = VAR_7 & VAR_0;
 struct strbuf VAR_10 = VAR_2;

 FUNC_0(VAR_6);
 FUNC_0(FUNC_6(VAR_3, VAR_6));

 FUNC_1(VAR_3, VAR_6, VAR_5, &VAR_10,
     FUNC_2(VAR_7));

 if (VAR_9)
  VAR_8 = FUNC_7(VAR_10.buf, VAR_10.len, FUNC_5(VAR_1),
     VAR_4);
 else
  VAR_8 = FUNC_3(VAR_10.buf, VAR_10.len, FUNC_5(VAR_1),
           VAR_4);
 FUNC_4(&VAR_10);
 return VAR_8;
}
