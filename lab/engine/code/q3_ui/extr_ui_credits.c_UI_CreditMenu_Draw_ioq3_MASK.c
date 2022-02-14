
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double FUNC_0 (char const**) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int,char const*,int,int ) ;
 int FUNC_2 (int,int,char*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_3( void ) {
 int VAR_7;
 int VAR_8;




 static const char *VAR_9[] = {
  "Tim Angus",
  "James Canete",
  "Vincent Cojot",
  "Ryan C. Gordon",
  "Aaron Gyes",
  "Zack Middleton",
  "Ludwig Nussel",
  "Julian Priestley",
  "Scirocco Six",
  "Thilo Schulz",
  "Zachary J. Slater",
  "Tony J. White",
  "...and many, many others!",
  ((void*)0)
 };


 VAR_7 = (VAR_2 - FUNC_0(VAR_9) * (1.42 * VAR_0 * VAR_1)) / 2;

 FUNC_1( 320, VAR_7, "ioquake3 contributors:", VAR_3|VAR_4, VAR_5 );
 VAR_7 += 1.42 * VAR_0 * VAR_1;

 for (VAR_8 = 0; VAR_9[VAR_8]; VAR_8++) {
  FUNC_1( 320, VAR_7, VAR_9[VAR_8], VAR_3|VAR_4, VAR_5 );
  VAR_7 += 1.42 * VAR_0 * VAR_1;
 }

 FUNC_2( 320, 459, "http://www.ioquake3.org/", VAR_3|VAR_4, VAR_6 );
}
