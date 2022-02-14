
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;
struct mapinfo {char* start; scalar_t__ mapoff; scalar_t__ maxoff; scalar_t__ maplen; int fd; } ;
typedef scalar_t__ off_t ;
typedef enum STYLE { ____Placeholder_STYLE } STYLE ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (struct mapinfo*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct mapinfo*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(FILE *VAR_3, const char *VAR_4, enum STYLE VAR_5, off_t VAR_6, struct stat *VAR_7)
{
 struct mapinfo VAR_8;
 off_t VAR_9, VAR_10, VAR_11;
 int VAR_12;

 if (!(VAR_10 = VAR_7->st_size))
  return;

 VAR_8.start = ((void*)0);
 VAR_8.mapoff = VAR_8.maxoff = VAR_10;
 VAR_8.fd = FUNC_0(VAR_3);
 VAR_8.maplen = 0;





 VAR_9 = VAR_10 - 2;
 VAR_11 = VAR_10;
 while (VAR_9 >= 0) {
  if (VAR_9 < VAR_8.mapoff ||
      VAR_9 >= VAR_8.mapoff + (off_t)VAR_8.maplen) {
   if (FUNC_2(&VAR_8, VAR_9) != 0) {
    FUNC_1(VAR_4);
    return;
   }
  }
  for (VAR_12 = VAR_9 - VAR_8.mapoff; VAR_12 >= 0; VAR_12--) {
   if (VAR_5 == VAR_0 && --VAR_6 == 0)
    break;
   if (VAR_8.start[VAR_12] == '\n')
    break;
  }

  VAR_9 = VAR_8.mapoff + VAR_12;
  if (VAR_12 < 0)
   continue;


  if (FUNC_3(&VAR_8, VAR_9 + 1, VAR_11 - VAR_9 - 1) != 0) {
   FUNC_1(VAR_4);
   return;
  }
  VAR_11 = VAR_9 + 1;
  VAR_9--;

  if (VAR_5 == VAR_2)
   VAR_6--;

  if (VAR_6 == 0 && VAR_5 != VAR_1) {

   VAR_9 = 0;
   break;
  }
 }
 if (VAR_9 < 0 && FUNC_3(&VAR_8, 0, VAR_11) != 0) {
  FUNC_1(VAR_4);
  return;
 }
 if (VAR_8.start != ((void*)0) && FUNC_4(VAR_8.start, VAR_8.maplen))
  FUNC_1(VAR_4);
}
