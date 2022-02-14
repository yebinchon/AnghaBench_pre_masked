
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,char*,int*,int*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char**,char*) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(const char *VAR_6)
{
 uint64_t VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 char *VAR_14, *VAR_15;
 bool VAR_16, VAR_17;

 VAR_8 = 1, VAR_10 = 1, VAR_11 = 1, VAR_12 = 1;
 VAR_16 = 0, VAR_17 = 0;
 VAR_15 = FUNC_2(VAR_6);
 if (VAR_15 == ((void*)0))
  goto out;

 while ((VAR_14 = FUNC_3(&VAR_15, ",")) != ((void*)0)) {
  if (FUNC_1(VAR_14, "%i%n", &VAR_13, &VAR_9) == 1) {
   VAR_10 = VAR_13;
   VAR_16 = 1;
  } else if (FUNC_1(VAR_14, "cpus=%i%n", &VAR_13, &VAR_9) == 1) {
   VAR_10 = VAR_13;
   VAR_16 = 1;
  } else if (FUNC_1(VAR_14, "sockets=%i%n", &VAR_13, &VAR_9) == 1) {
   VAR_11 = VAR_13;
   VAR_17 = 1;
  } else if (FUNC_1(VAR_14, "cores=%i%n", &VAR_13, &VAR_9) == 1) {
   VAR_8 = VAR_13;
   VAR_17 = 1;
  } else if (FUNC_1(VAR_14, "threads=%i%n", &VAR_13, &VAR_9) == 1) {
   VAR_12 = VAR_13;
   VAR_17 = 1;





  } else if (VAR_14[0] == '\0')
   continue;
  else
   goto out;

  if (VAR_14[VAR_9] != '\0')
   goto out;
 }
 FUNC_0(VAR_15);
 VAR_15 = ((void*)0);




 if (VAR_10 < 1 || VAR_11 < 1 || VAR_8 < 1 || VAR_12 < 1 ||
     VAR_10 > VAR_0 || VAR_11 > VAR_0 || VAR_8 > VAR_0 ||
     VAR_12 > VAR_0)
  return (-1);


 if (!VAR_17)
  VAR_11 = VAR_10;





 VAR_7 = (uint64_t)VAR_11 * VAR_8 * VAR_12;
 if (VAR_7 > VAR_0 || (VAR_16 && VAR_10 != VAR_7))
  return (-1);

 VAR_2 = VAR_7;
 VAR_4 = VAR_11;
 VAR_1 = VAR_8;
 VAR_5 = VAR_12;
 return(0);

out:
 FUNC_0(VAR_15);
 return (-1);
}
