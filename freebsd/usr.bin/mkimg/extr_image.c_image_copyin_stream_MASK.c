
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int ssize_t ;
typedef long long off_t ;
typedef int lba_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int,long long,int ) ;
 char* FUNC_1 (int ,long long,size_t,long long*) ;
 int FUNC_2 (char*,size_t) ;
 long long FUNC_3 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int,char*,size_t) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(lba_t VAR_4, int VAR_5, uint64_t *VAR_6)
{
 char *VAR_7;
 uint64_t VAR_8;
 off_t VAR_9;
 size_t VAR_10;
 ssize_t VAR_11;
 int VAR_12;
 off_t VAR_13;







 VAR_10 = VAR_3 * VAR_2;

 VAR_8 = 0;
 do {
  VAR_9 = FUNC_3(VAR_10);
  if (VAR_9 == -1LL)
   return (VAR_0);
  VAR_7 = FUNC_1(VAR_1, VAR_9, VAR_10, &VAR_13);
  if (VAR_7 == ((void*)0))
   return (VAR_0);
  VAR_11 = FUNC_4(VAR_5, &VAR_7[VAR_13], VAR_10);
  if (VAR_11 > 0)
   VAR_12 = FUNC_0(VAR_4, &VAR_7[VAR_13], VAR_11, VAR_9,
       VAR_1);
  else if (VAR_11 < 0)
   VAR_12 = VAR_0;
  else
   VAR_12 = 0;
  FUNC_2(VAR_7, VAR_10);

  if (VAR_12)
   return (VAR_12);

  VAR_8 += VAR_11;
  VAR_4 += (VAR_11 + VAR_3 - 1) / VAR_3;
 } while (VAR_11 > 0);

 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_8;
 return (0);
}
