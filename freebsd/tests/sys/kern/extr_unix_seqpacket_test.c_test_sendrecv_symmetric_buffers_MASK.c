
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int bufsize ;


 int FUNC_0 (int const,int,char*,int const,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int const) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (int*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,int const,int ) ;
 int FUNC_9 (int,char*,int const,int ) ;
 int FUNC_10 (int,int ,int ,int*,int) ;

__attribute__((used)) static void
FUNC_11(int VAR_5, int VAR_6) {
 int VAR_7;
 int VAR_8[2];
 const ssize_t VAR_9 = VAR_5 / 2;
 char VAR_10[VAR_9];
 char VAR_11[VAR_9];
 ssize_t VAR_12, VAR_13;


 if (VAR_6)
  FUNC_5(VAR_8);
 else
  FUNC_6(VAR_8);


 VAR_7 = FUNC_10(VAR_8[0], VAR_2, VAR_4, &VAR_5, sizeof(VAR_5));
 FUNC_1(0, VAR_7);
 VAR_7 = FUNC_10(VAR_8[1], VAR_2, VAR_3, &VAR_5, sizeof(VAR_5));
 FUNC_1(0, VAR_7);


 FUNC_3(VAR_10, VAR_9);


 VAR_12 = FUNC_9(VAR_8[0], VAR_10, VAR_9, VAR_0);
 if (VAR_12 < 0) {
  FUNC_7("send");
  FUNC_2("send returned < 0");
 }
 FUNC_0(VAR_9, VAR_12, "expected %zd=send(...) but got %zd",
     VAR_9, VAR_12);

 VAR_13 = FUNC_8(VAR_8[1], VAR_11, VAR_9, VAR_1);
 if (VAR_13 < 0) {
  FUNC_7("recv");
  FUNC_2("recv returned < 0");
 }
 FUNC_0(VAR_9, VAR_13, "expected %zd=send(...) but got %zd",
     VAR_9, VAR_13);
 FUNC_4(VAR_8[0]);
 FUNC_4(VAR_8[1]);
}
