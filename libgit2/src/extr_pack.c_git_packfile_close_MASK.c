
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; } ;
struct git_pack_file {int pack_name; TYPE_1__ mwf; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct git_pack_file *VAR_0, bool VAR_1)
{
 if (VAR_0->mwf.fd >= 0) {
  FUNC_0(&VAR_0->mwf);
  FUNC_1(VAR_0->mwf.fd);
  VAR_0->mwf.fd = -1;
 }

 if (VAR_1)
  FUNC_2(VAR_0->pack_name);
}
