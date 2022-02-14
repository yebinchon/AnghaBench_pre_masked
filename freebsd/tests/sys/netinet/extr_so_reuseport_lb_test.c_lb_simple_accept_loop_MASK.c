
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int sa_len; } ;


 int FUNC_0 (int,char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int *,int *) ;
 int* FUNC_2 (size_t,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,struct sockaddr const*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(int VAR_4, const struct sockaddr *VAR_5, int VAR_6[],
    size_t VAR_7, int VAR_8)
{
 size_t VAR_9;
 int *VAR_10;
 int VAR_11, VAR_12, VAR_13, VAR_14;





 VAR_13 = VAR_8 / VAR_7 / 8;
 VAR_10 = FUNC_2(VAR_7, sizeof(*VAR_10));
 FUNC_0(VAR_10 != ((void*)0), "calloc() failed: %s",
     FUNC_6(VAR_3));

 while (VAR_8-- > 0) {
  VAR_14 = FUNC_5(VAR_4, VAR_2, 0);
  FUNC_0(VAR_14 >= 0, "socket() failed: %s",
      FUNC_6(VAR_3));

  VAR_12 = FUNC_4(VAR_14, VAR_5, VAR_5->sa_len);
  FUNC_0(VAR_12 == 0, "connect() failed: %s",
      FUNC_6(VAR_3));




  do {
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
    VAR_11 = FUNC_1(VAR_6[VAR_9], ((void*)0), ((void*)0));
    if (VAR_11 < 0) {
     FUNC_0(VAR_3 == VAR_1 ||
         VAR_3 == VAR_0,
         "accept() failed: %s",
         FUNC_6(VAR_3));
     continue;
    }

    VAR_12 = FUNC_3(VAR_11);
    FUNC_0(VAR_12 == 0,
        "close() failed: %s", FUNC_6(VAR_3));

    VAR_10[VAR_9]++;
    break;
   }
  } while (VAR_9 == VAR_7);

  VAR_12 = FUNC_3(VAR_14);
  FUNC_0(VAR_12 == 0, "close() failed: %s",
      FUNC_6(VAR_3));
 }

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
  FUNC_0(VAR_10[VAR_9] > VAR_13, "uneven balancing");
}
