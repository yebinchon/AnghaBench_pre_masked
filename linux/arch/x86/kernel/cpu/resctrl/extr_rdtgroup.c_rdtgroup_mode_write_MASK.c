
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdtgroup {int mode; } ;
struct kernfs_open_file {int kn; } ;
typedef size_t ssize_t ;
typedef int loff_t ;
typedef enum rdtgrp_mode { ____Placeholder_rdtgrp_mode } rdtgrp_mode ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct rdtgroup* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rdtgroup*) ;
 int FUNC_5 (struct rdtgroup*) ;
 int FUNC_6 (struct rdtgroup*) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static ssize_t FUNC_8(struct kernfs_open_file *VAR_6,
       char *VAR_7, size_t VAR_8, loff_t VAR_9)
{
 struct rdtgroup *VAR_10;
 enum rdtgrp_mode VAR_11;
 int VAR_12 = 0;


 if (VAR_8 == 0 || VAR_7[VAR_8 - 1] != '\n')
  return -VAR_0;
 VAR_7[VAR_8 - 1] = '\0';

 VAR_10 = FUNC_2(VAR_6->kn);
 if (!VAR_10) {
  FUNC_3(VAR_6->kn);
  return -VAR_1;
 }

 FUNC_0();

 VAR_11 = VAR_10->mode;

 if ((!FUNC_7(VAR_7, "shareable") && VAR_11 == VAR_5) ||
     (!FUNC_7(VAR_7, "exclusive") && VAR_11 == VAR_2) ||
     (!FUNC_7(VAR_7, "pseudo-locksetup") &&
      VAR_11 == VAR_4) ||
     (!FUNC_7(VAR_7, "pseudo-locked") && VAR_11 == VAR_3))
  goto out;

 if (VAR_11 == VAR_3) {
  FUNC_1("Cannot change pseudo-locked group\n");
  VAR_12 = -VAR_0;
  goto out;
 }

 if (!FUNC_7(VAR_7, "shareable")) {
  if (VAR_10->mode == VAR_4) {
   VAR_12 = FUNC_5(VAR_10);
   if (VAR_12)
    goto out;
  }
  VAR_10->mode = VAR_5;
 } else if (!FUNC_7(VAR_7, "exclusive")) {
  if (!FUNC_6(VAR_10)) {
   VAR_12 = -VAR_0;
   goto out;
  }
  if (VAR_10->mode == VAR_4) {
   VAR_12 = FUNC_5(VAR_10);
   if (VAR_12)
    goto out;
  }
  VAR_10->mode = VAR_2;
 } else if (!FUNC_7(VAR_7, "pseudo-locksetup")) {
  VAR_12 = FUNC_4(VAR_10);
  if (VAR_12)
   goto out;
  VAR_10->mode = VAR_4;
 } else {
  FUNC_1("Unknown or unsupported mode\n");
  VAR_12 = -VAR_0;
 }

out:
 FUNC_3(VAR_6->kn);
 return VAR_12 ?: VAR_8;
}
