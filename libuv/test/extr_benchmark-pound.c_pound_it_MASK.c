
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int (* setup_fn ) (int,void*) ;
typedef int make_connect_fn ;
typedef int (* connect_fn ) (int,int ,void*) ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 double VAR_0 ;
 int VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,char const*,int,double,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(int VAR_7,
                    const char* VAR_8,
                    setup_fn VAR_9,
                    connect_fn VAR_10,
                    make_connect_fn VAR_11,
                    void* VAR_12) {
  double VAR_13;
  int VAR_14;
  uint64_t VAR_15;
  uint64_t VAR_16;

  VAR_4 = FUNC_4();

  FUNC_8(VAR_4);
  VAR_5 = FUNC_6(VAR_4);


  VAR_15 = FUNC_5();

  VAR_9(VAR_7, VAR_12);

  VAR_14 = VAR_10(VAR_7, VAR_11, VAR_12);
  FUNC_0(!VAR_14);

  FUNC_7(VAR_4, VAR_1);

  VAR_16 = FUNC_5();


  VAR_13 = (double)(VAR_16 - VAR_15) / VAR_0;

  FUNC_3(VAR_6, "%s-conn-pound-%d: %.0f accepts/s (%d failed)\n",
          VAR_8,
          VAR_7,
          VAR_2 / VAR_13,
          VAR_3);
  FUNC_2(VAR_6);

  FUNC_1();
  return 0;
}
