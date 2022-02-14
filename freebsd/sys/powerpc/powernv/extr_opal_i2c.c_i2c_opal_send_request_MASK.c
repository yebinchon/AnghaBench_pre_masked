
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct opal_msg {int dummy; } ;
struct opal_i2c_request {int dummy; } ;
typedef int msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct opal_msg*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct opal_msg) ;
 int FUNC_5 (struct opal_msg*,int,int ) ;
 int FUNC_6 (struct opal_i2c_request*) ;

__attribute__((used)) static int
FUNC_7(uint32_t VAR_3, struct opal_i2c_request *VAR_4)
{
 struct opal_msg VAR_5;
 uint64_t VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1();

 FUNC_0(&VAR_5, 0, sizeof(VAR_5));

 VAR_7 = FUNC_2(VAR_1, VAR_6, VAR_3,
     FUNC_6(VAR_4));
 if (VAR_7 != VAR_0)
  goto out;

 VAR_7 = FUNC_5(&VAR_5, sizeof(VAR_5), VAR_6);

 if (VAR_7 != VAR_2)
  goto out;

 VAR_7 = FUNC_4(VAR_5);

out:
 FUNC_3(VAR_6);

 return (VAR_7);
}
