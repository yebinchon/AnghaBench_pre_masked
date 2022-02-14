
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fingerprint_entry {int count; int entry; } ;
struct fingerprint {int map; struct fingerprint_entry* entries; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,unsigned int) ;
 struct fingerprint_entry* FUNC_2 (int *,struct fingerprint_entry*,struct fingerprint_entry*,int *) ;
 int FUNC_3 (int *,int *,int *,int) ;
 scalar_t__ FUNC_4 (char const) ;
 unsigned int FUNC_5 (char const) ;
 struct fingerprint_entry* FUNC_6 (int,int) ;

__attribute__((used)) static void FUNC_7(struct fingerprint *VAR_0,
       const char *VAR_1,
       const char *VAR_2)
{
 unsigned int VAR_3, VAR_4 = 0, VAR_5;
 const char *VAR_6;
 int VAR_7 = 1 + VAR_2 - VAR_1;
 struct fingerprint_entry *VAR_8 = FUNC_6(VAR_7,
  sizeof(struct fingerprint_entry));
 struct fingerprint_entry *VAR_9;

 FUNC_3(&VAR_0->map, ((void*)0), ((void*)0), VAR_7);
 VAR_0->entries = VAR_8;
 for (VAR_6 = VAR_1; VAR_6 <= VAR_2; ++VAR_6, VAR_4 = VAR_5) {





  if ((VAR_6 == VAR_2) || FUNC_4(*VAR_6))
   VAR_5 = 0;
  else
   VAR_5 = FUNC_5(*VAR_6);
  VAR_3 = VAR_4 | (VAR_5 << 8);

  if (VAR_3 == 0)
   continue;
  FUNC_1(&VAR_8->entry, VAR_3);

  VAR_9 = FUNC_2(&VAR_0->map, VAR_8,
                        VAR_8, ((void*)0));
  if (VAR_9) {
   VAR_9->count += 1;
  } else {
   VAR_8->count = 1;
   FUNC_0(&VAR_0->map, &VAR_8->entry);
   ++VAR_8;
  }
 }
}
