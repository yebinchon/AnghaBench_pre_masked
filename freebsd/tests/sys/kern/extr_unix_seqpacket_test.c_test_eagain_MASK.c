
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int sndbufsize ;
typedef int rcvbufsize ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,size_t const) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,size_t const,int ) ;
 int FUNC_9 (int,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_10(int VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9[2];
 const size_t VAR_10 = (VAR_6 + VAR_7) * 2;
 const size_t VAR_11 = FUNC_1(VAR_6, VAR_7) / 4;
 const int VAR_12 = VAR_10 / VAR_11;
 char VAR_13[VAR_11];
 ssize_t VAR_14;


 FUNC_6(VAR_9);

 FUNC_0(0, FUNC_9(VAR_9[0], VAR_2, VAR_4, &VAR_6,
     sizeof(VAR_6)));
 FUNC_0(0, FUNC_9(VAR_9[1], VAR_2, VAR_3, &VAR_7,
     sizeof(VAR_7)));

 FUNC_4(VAR_13, VAR_11);

 for(VAR_8=0; VAR_8 < VAR_12; VAR_8++) {
  VAR_14 = FUNC_8(VAR_9[0], VAR_13, VAR_11, VAR_1);
  if (VAR_14 == -1) {
   if (VAR_5 == VAR_0) {
    FUNC_5(VAR_9[0]);
    FUNC_5(VAR_9[1]);
    FUNC_3();
   }
   else {
    FUNC_7("send");
    FUNC_2("send returned < 0 but not EAGAIN");
   }
  }
 }
 FUNC_2("Never got EAGAIN");
}
