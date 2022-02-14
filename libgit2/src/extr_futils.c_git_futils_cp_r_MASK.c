
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint32_t ;
typedef int mode_t ;
typedef int info ;
struct TYPE_10__ {int size; } ;
typedef TYPE_1__ git_buf ;
struct TYPE_11__ {char const* to_root; int flags; int mkdir_flags; TYPE_1__ to; int from_prefix; int dirmode; } ;
typedef TYPE_2__ cp_r_info ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,char const*,char*) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

int FUNC_5(
 const char *VAR_7,
 const char *VAR_8,
 uint32_t VAR_9,
 mode_t VAR_10)
{
 int VAR_11;
 git_buf VAR_12 = VAR_0;
 cp_r_info VAR_13;

 if (FUNC_3(&VAR_12, VAR_7, "") < 0)
  return -1;

 FUNC_4(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.to_root = VAR_8;
 VAR_13.flags = VAR_9;
 VAR_13.dirmode = VAR_10;
 VAR_13.from_prefix = VAR_12.size;
 FUNC_2(&VAR_13.to, 0);


 if ((VAR_9 & VAR_2) == 0) {



  VAR_13.mkdir_flags = VAR_5 | VAR_6;
  if ((VAR_9 & VAR_1) != 0)
   VAR_13.mkdir_flags |= VAR_4;
 } else {

  VAR_13.mkdir_flags =
   ((VAR_9 & VAR_1) != 0) ? VAR_3 : 0;
 }

 VAR_11 = FUNC_0(&VAR_13, &VAR_12);

 FUNC_1(&VAR_12);
 FUNC_1(&VAR_13.to);

 return VAR_11;
}
