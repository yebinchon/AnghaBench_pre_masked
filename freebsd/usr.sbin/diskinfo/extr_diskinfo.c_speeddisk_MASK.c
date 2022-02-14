
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int off_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int,int) ;

__attribute__((used)) static void
FUNC_7(int VAR_0, off_t VAR_1, u_int VAR_2)
{
 int VAR_3, VAR_4;
 off_t VAR_5, VAR_6, VAR_7, VAR_8;





 VAR_7 = VAR_1 / VAR_2;
 if (VAR_1 < 1024 * 1024 || VAR_7 < 2048)
  return;


 VAR_8 = 1ULL << (FUNC_3(VAR_7 / (4 * 200)) - 1);
 if (VAR_8 > 16384)
  VAR_8 = 16384;
 VAR_3 = VAR_1 / (1024 * 1024);
 if (VAR_3 > 100)
  VAR_3 = 100;

 FUNC_4("Seek times:\n");
 FUNC_4("\tFull stroke:\t");
 VAR_5 = 0;
 VAR_6 = VAR_7 - VAR_8;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 125; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5 += VAR_8;
  FUNC_6(VAR_0, VAR_6, VAR_2);
  VAR_6 -= VAR_8;
 }
 FUNC_1(250);

 FUNC_4("\tHalf stroke:\t");
 VAR_5 = VAR_7 / 4;
 VAR_6 = VAR_5 + VAR_7 / 2;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 125; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5 += VAR_8;
  FUNC_6(VAR_0, VAR_6, VAR_2);
  VAR_6 += VAR_8;
 }
 FUNC_1(250);
 FUNC_4("\tQuarter stroke:\t");
 VAR_5 = VAR_7 / 4;
 VAR_6 = VAR_5 + VAR_7 / 4;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 250; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5 += VAR_8;
  FUNC_6(VAR_0, VAR_6, VAR_2);
  VAR_6 += VAR_8;
 }
 FUNC_1(500);

 FUNC_4("\tShort forward:\t");
 VAR_5 = VAR_7 / 2;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 400; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5 += VAR_8;
 }
 FUNC_1(400);

 FUNC_4("\tShort backward:\t");
 VAR_5 = VAR_7 / 2;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 400; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5 -= VAR_8;
 }
 FUNC_1(400);

 FUNC_4("\tSeq outer:\t");
 VAR_5 = 0;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 2048; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5++;
 }
 FUNC_1(2048);

 FUNC_4("\tSeq inner:\t");
 VAR_5 = VAR_7 - 2048;
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < 2048; VAR_4++) {
  FUNC_6(VAR_0, VAR_5, VAR_2);
  VAR_5++;
 }
 FUNC_1(2048);

 FUNC_4("\nTransfer rates:\n");
 FUNC_4("\toutside:     ");
 FUNC_6(VAR_0, 0, VAR_2);
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_5(VAR_0);
 }
 FUNC_2(VAR_3 * 1024);

 FUNC_4("\tmiddle:      ");
 VAR_5 = VAR_7 / 2 - VAR_3 * (1024*1024 / VAR_2) / 2 - 1;
 FUNC_6(VAR_0, VAR_5, VAR_2);
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_5(VAR_0);
 }
 FUNC_2(VAR_3 * 1024);

 FUNC_4("\tinside:      ");
 VAR_5 = VAR_7 - VAR_3 * (1024*1024 / VAR_2) - 1;
 FUNC_6(VAR_0, VAR_5, VAR_2);
 FUNC_0();
 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  FUNC_5(VAR_0);
 }
 FUNC_2(VAR_3 * 1024);

 FUNC_4("\n");
 return;
}
