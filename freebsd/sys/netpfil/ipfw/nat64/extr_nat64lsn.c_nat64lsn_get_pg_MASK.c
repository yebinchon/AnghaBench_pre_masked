
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct nat64lsn_pgchunk {struct nat64lsn_pg** pgptr; } ;
struct nat64lsn_pg {int dummy; } ;
typedef int in_addr_t ;


 scalar_t__ FUNC_0 (struct nat64lsn_pg*,int ) ;
 scalar_t__ FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (int*,int,int) ;
 int FUNC_3 (struct nat64lsn_pg**,struct nat64lsn_pg*,struct nat64lsn_pg*) ;
 int FUNC_4 () ;
 int FUNC_5 (int*) ;
 struct nat64lsn_pg* FUNC_6 (struct nat64lsn_pg**) ;

__attribute__((used)) static struct nat64lsn_pg*
FUNC_7(uint32_t *VAR_1, uint32_t *VAR_2,
    struct nat64lsn_pgchunk **VAR_3, struct nat64lsn_pg **VAR_4,
    uint32_t *VAR_5, in_addr_t VAR_6)
{
 struct nat64lsn_pg *VAR_7, *VAR_8;
 uint32_t VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = 0;

 VAR_8 = VAR_7 = FUNC_6(VAR_4);
 VAR_9 = VAR_10 = FUNC_5(VAR_5);

 if (!FUNC_1(*VAR_1, VAR_9 / 32))
  VAR_9 = 0;
 do {
  FUNC_4();
  if (VAR_7 != ((void*)0) && FUNC_0(VAR_7, VAR_6) > 0) {






   if (VAR_11 > 0)
    FUNC_3(VAR_4, VAR_8, VAR_7);
   return (VAR_7);
  }

  if (!FUNC_1(*VAR_1, VAR_9 / 32))
   break;

  if (FUNC_1(VAR_2[VAR_9 / 32], VAR_9 % 32))
   VAR_7 = FUNC_6(
       &VAR_3[VAR_9 / 32]->pgptr[VAR_9 % 32]);
  else
   VAR_7 = ((void*)0);

  VAR_9++;
 } while (++VAR_11 < VAR_0);


 if (!FUNC_1(*VAR_1, VAR_9 / 32))
  VAR_9 = 0;
 FUNC_2(VAR_5, VAR_10, VAR_9);
 return (((void*)0));
}
