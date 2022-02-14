
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct td_desc {int fd; int buflen; int td_id; void* buf; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int,int) ;
 scalar_t__ FUNC_4 (int *,int *,int ,struct td_desc*) ;
 int FUNC_5 (int,int) ;
 int VAR_0 ;

__attribute__((used)) static struct td_desc **
FUNC_6(int *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5, VAR_6 = VAR_2 * VAR_3;
 int VAR_7 = FUNC_5(VAR_6 * sizeof (struct td_desc *), 64);
 int VAR_8 = FUNC_5(sizeof(struct td_desc), 64);
 char *VAR_9 = FUNC_0(1, VAR_7 + VAR_8 * VAR_6);
 struct td_desc **VAR_10;

 FUNC_3("td len %d -> %d\n", (int)sizeof(struct td_desc) , VAR_8);

 if (VAR_9 == ((void*)0)) {
  FUNC_2("no room for pointers!");
  FUNC_1(1);
 }
 VAR_10 = (struct td_desc **)VAR_9;
 VAR_9 += VAR_7;
 for (VAR_5 = VAR_4 = 0; VAR_4 < VAR_6; VAR_4++, VAR_9 += VAR_8) {
  VAR_10[VAR_4] = (struct td_desc *)VAR_9;
  VAR_10[VAR_4]->fd = VAR_1[VAR_5];
  VAR_10[VAR_4]->buflen = 65536;
  VAR_10[VAR_4]->buf = FUNC_0(1, VAR_10[VAR_4]->buflen);
  if (++VAR_5 == VAR_2)
   VAR_5 = 0;
  if (FUNC_4(&VAR_10[VAR_4]->td_id, ((void*)0), VAR_0, VAR_10[VAR_4])) {
   FUNC_2("unable to create thread");
   FUNC_1(1);
  }
 }
 return VAR_10;
}
