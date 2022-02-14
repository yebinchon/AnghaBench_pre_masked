
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct dn_heap {scalar_t__ elements; TYPE_1__* p; } ;
typedef int h ;
struct TYPE_2__ {scalar_t__ key; int object; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dn_heap*,int) ;
 int FUNC_2 (struct dn_heap*,int *) ;
 int FUNC_3 (struct dn_heap*,int,int) ;
 int FUNC_4 (struct dn_heap*,int,void*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int,scalar_t__,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int
FUNC_9(int VAR_0, char *VAR_1[])
{
 struct dn_heap VAR_2;
 int VAR_3, VAR_4, VAR_5, VAR_6;

 FUNC_8();
 return 0;


 VAR_4 = (VAR_0 > 1) ? FUNC_0(VAR_1[1]) : 0;
 if (VAR_4 <= 0 || VAR_4 > 1000000)
  VAR_4 = 100;
 VAR_5 = (VAR_0 > 2) ? FUNC_0(VAR_1[2]) : 0;
 if (VAR_5 <= 0)
  VAR_4 = 1000000;
 VAR_6 = (VAR_0 > 3) ? FUNC_0(VAR_1[3]) : 0;
 FUNC_1(&VAR_2, sizeof(VAR_2));
 FUNC_3(&VAR_2, VAR_4, -1);
 while (VAR_5-- > 0) {
  uint64_t VAR_7 = 0;
  for (VAR_3=0; VAR_3 < VAR_4; VAR_3++)
   FUNC_4(&VAR_2, VAR_6 ? VAR_4-VAR_3: FUNC_7(), (void *)(100+VAR_3));

  for (VAR_3=0; VAR_2.elements > 0; VAR_3++) {
   uint64_t VAR_8 = VAR_2.p[0].key;
   if (VAR_8 < VAR_7)
    FUNC_5("wrong sequence\n");
   VAR_7 = VAR_8;
   if (0)
   FUNC_6("%d key %llu, val %p\n",
    VAR_3, VAR_2.p[0].key, VAR_2.p[0].object);
   FUNC_2(&VAR_2, ((void*)0));
  }
 }
 return 0;
}
