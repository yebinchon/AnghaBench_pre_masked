
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ide_cmd {unsigned int nbytes; unsigned int nleft; int tf_flags; scalar_t__ last_xfer_len; } ;
typedef int ide_drive_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,unsigned int) ;

__attribute__((used)) static bool FUNC_1(ide_drive_t *VAR_2, struct ide_cmd *VAR_3)
{
 unsigned int VAR_4 = VAR_3->nbytes - VAR_3->nleft;

 if (VAR_3->tf_flags & VAR_1)
  VAR_4 -= VAR_3->last_xfer_len;

 if (VAR_4 > 0) {
  FUNC_0(VAR_2, VAR_0, VAR_4);
  return 1;
 }

 return 0;
}
