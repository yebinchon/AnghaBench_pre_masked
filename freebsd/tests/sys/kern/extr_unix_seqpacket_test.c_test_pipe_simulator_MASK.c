
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int sndbufsize ;
typedef int rcvbufsize ;


 int FUNC_0 (int const,int,char*,...) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int*) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (char*,char*,int const) ;
 int FUNC_9 (char*,int,int const) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int,char*,int const,int ) ;
 int FUNC_12 (int,char*,int const,int ) ;
 int FUNC_13 (int,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_14(int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 int VAR_12[2];
 const ssize_t VAR_13 = FUNC_4(VAR_8, VAR_9) / 4;
 int VAR_14;
 char VAR_15[VAR_13];
 char VAR_16[VAR_13];
 char VAR_17[VAR_13];
 ssize_t VAR_18, VAR_19;
 bool VAR_20 = 1;


 FUNC_7(VAR_12);

 FUNC_1(0, FUNC_13(VAR_12[0], VAR_4, VAR_6, &VAR_8,
     sizeof(VAR_8)));
 FUNC_1(0, FUNC_13(VAR_12[1], VAR_4, VAR_5, &VAR_9,
     sizeof(VAR_9)));


 VAR_14 = FUNC_3(VAR_8, VAR_9) * 8 / VAR_13;
 for (VAR_10=0, VAR_11=0;
      VAR_10 < VAR_14 || VAR_11 < VAR_14; ) {
  if (VAR_20 && VAR_10 < VAR_14) {


   FUNC_9(VAR_15, VAR_10, VAR_13);
   VAR_18 = FUNC_12(VAR_12[0], VAR_15, VAR_13, VAR_2);
   if (VAR_18 < 0) {





    if (VAR_7 == VAR_0 || VAR_7 == VAR_1)
     VAR_20 = 0;
    else {
     FUNC_10("send");
     FUNC_5("send failed");
    }
   } else {
    FUNC_0(VAR_13, VAR_18,
        "expected %zd=send(...) but got %zd",
        VAR_13, VAR_18);
    VAR_10++;
   }
  } else {

   VAR_19 = FUNC_11(VAR_12[1], VAR_16, VAR_13, VAR_3);
   if (VAR_19 < 0) {
    if (VAR_7 == VAR_0) {
     VAR_20 = 1;
     FUNC_2(VAR_10 < VAR_14,
         "Packets were lost!");
    }
    else {
     FUNC_10("recv");
     FUNC_5("recv failed");
    }
   } else {
    FUNC_0(VAR_13, VAR_19,
        "expected %zd=recv(...) but got %zd",
        VAR_13, VAR_19);
    FUNC_9(VAR_17, VAR_11, VAR_13);
    FUNC_0(0, FUNC_8(VAR_17, VAR_16,
              VAR_13),
        "Received data miscompare");
    VAR_11++;
   }
  }
 }
 FUNC_6(VAR_12[0]);
 FUNC_6(VAR_12[1]);
}
