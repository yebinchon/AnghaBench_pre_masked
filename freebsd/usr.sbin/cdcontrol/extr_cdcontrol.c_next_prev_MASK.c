
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_toc_header {int ending_track; int starting_track; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,struct ioc_toc_header*) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (char*,char*,int*) ;
 int FUNC_3 (int*,int*,int*,int*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(char *VAR_3, int VAR_4)
{
 struct ioc_toc_header VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_6 = (VAR_4 == VAR_1) ? 1 : -1;
 VAR_10 = FUNC_0 (VAR_2, VAR_0, &VAR_5);
 if (VAR_10 < 0)
  return (VAR_10);

 VAR_8 = VAR_5.ending_track - VAR_5.starting_track + 1;
 VAR_10 = FUNC_3 (&VAR_11, &VAR_7, &VAR_7, &VAR_7);
 if (VAR_10 < 0)
  return (-1);

 if (VAR_3 && *VAR_3) {
  if (FUNC_2 (VAR_3, "%u", &VAR_9) != 1) {
      FUNC_4("invalid command argument");
      return (0);
  } else
      VAR_11 += VAR_9 * VAR_6;
 } else
  VAR_11 += VAR_6;

 if (VAR_11 > VAR_5.ending_track)
  VAR_11 = 1;

 return (FUNC_1 (VAR_11, 1, VAR_8, 1));
}
