
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mddev {int dummy; } ;
struct md_rdev {long last_read_error; int read_errors; } ;
typedef int read_errors ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned int) ;
 long FUNC_2 () ;

__attribute__((used)) static void FUNC_3(struct mddev *VAR_0, struct md_rdev *VAR_1)
{
 long VAR_2;
 unsigned long VAR_3;
 unsigned int VAR_4 = FUNC_0(&VAR_1->read_errors);

 VAR_2 = FUNC_2();

 if (VAR_1->last_read_error == 0) {

  VAR_1->last_read_error = VAR_2;
  return;
 }

 VAR_3 = (long)(VAR_2 -
       VAR_1->last_read_error) / 3600;

 VAR_1->last_read_error = VAR_2;






 if (VAR_3 >= 8 * sizeof(VAR_4))
  FUNC_1(&VAR_1->read_errors, 0);
 else
  FUNC_1(&VAR_1->read_errors, VAR_4 >> VAR_3);
}
