
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int,char**,char*) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (scalar_t__*,int ,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (char const*) ;

int FUNC_8(int VAR_11, char **VAR_12)
{
 const char *VAR_13 = VAR_12[0];
 int VAR_14, VAR_15;

 FUNC_2(VAR_3);

 while ((VAR_15 = FUNC_4(VAR_11, VAR_12, "i:I:qs:S:t")) != -1) {
  VAR_14 = 0;
  switch(VAR_15) {
  case 'S':
   VAR_14 = FUNC_6(&VAR_9, VAR_6, VAR_0);
   break;
  case 'I':
   VAR_14 = FUNC_6(&VAR_5, VAR_6, VAR_0);
   break;
  case 's':
   VAR_14 = FUNC_6(&VAR_9, VAR_6, VAR_2);
   break;
  case 'i':
   VAR_14 = FUNC_6(&VAR_5, VAR_6, VAR_2);
   break;
  case 't':
   VAR_10 = 1;
   break;
  case 'q':
   VAR_8 = 1;
   break;
  }

  if (VAR_14)
   goto out;
 }

 if (VAR_7 >= VAR_11) {
  VAR_14 = FUNC_7(VAR_13);
  goto out;
 }

 if (VAR_4 == VAR_1) {
  VAR_14 = FUNC_7(VAR_13);
  goto out;
 }

 if (VAR_9 && VAR_5) {
  FUNC_5("Cannot append/extract metadata and signature in one run\n");
  return 1;
 }

 if (VAR_4)
  VAR_14 = FUNC_0(VAR_12[VAR_7]);
 else
  VAR_14 = FUNC_3(VAR_12[VAR_7]);

out:
 FUNC_1();
 return VAR_14;
}
