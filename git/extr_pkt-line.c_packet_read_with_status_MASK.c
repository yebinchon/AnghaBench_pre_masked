
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum packet_read_status { ____Placeholder_packet_read_status } packet_read_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,...) ;
 scalar_t__ FUNC_2 (int,char**,size_t*,char*,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int,int ) ;
 scalar_t__ FUNC_5 (char*,char*) ;

enum packet_read_status FUNC_6(int VAR_6, char **VAR_7,
      size_t *VAR_8, char *VAR_9,
      unsigned VAR_10, int *VAR_11,
      int VAR_12)
{
 int VAR_13;
 char VAR_14[4];

 if (FUNC_2(VAR_6, VAR_7, VAR_8, VAR_14, 4, VAR_12) < 0) {
  *VAR_11 = -1;
  return VAR_3;
 }

 VAR_13 = FUNC_3(VAR_14);

 if (VAR_13 < 0) {
  FUNC_1(FUNC_0("protocol error: bad line length character: %.4s"), VAR_14);
 } else if (!VAR_13) {
  FUNC_4("0000", 4, 0);
  *VAR_11 = 0;
  return VAR_4;
 } else if (VAR_13 == 1) {
  FUNC_4("0001", 4, 0);
  *VAR_11 = 0;
  return VAR_1;
 } else if (VAR_13 < 4) {
  FUNC_1(FUNC_0("protocol error: bad line length %d"), VAR_13);
 }

 VAR_13 -= 4;
 if ((unsigned)VAR_13 >= VAR_10)
  FUNC_1(FUNC_0("protocol error: bad line length %d"), VAR_13);

 if (FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_13, VAR_12) < 0) {
  *VAR_11 = -1;
  return VAR_3;
 }

 if ((VAR_12 & VAR_0) &&
     VAR_13 && VAR_9[VAR_13-1] == '\n')
  VAR_13--;

 VAR_9[VAR_13] = 0;
 FUNC_4(VAR_9, VAR_13, 0);

 if ((VAR_12 & VAR_2) &&
     FUNC_5(VAR_9, "ERR "))
  FUNC_1(FUNC_0("remote error: %s"), VAR_9 + 4);

 *VAR_11 = VAR_13;
 return VAR_5;
}
