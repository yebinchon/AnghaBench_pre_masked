
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int svid; int oh; int l_len; int l_offset; int exclusive; } ;
struct file_lock {int client_name; TYPE_1__ client; int flags; int status; int nsm_status; int client_cookie; int filehandle; } ;
typedef int hbuff ;
typedef int cbuff ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned char*,int,char*,int,char*,int) ;

void
FUNC_3(const struct file_lock *VAR_2)
{





 if (VAR_1 < 2) {
  return;
 }

 if (VAR_2 != ((void*)0)) {
  FUNC_0("Dumping file lock structure @ %p\n", VAR_2);
  FUNC_0("Dumping nlm4_holder:\n"
      "exc: %x  svid: %x  offset:len %llx:%llx\n",
      VAR_2->client.exclusive, VAR_2->client.svid,
      VAR_2->client.l_offset, VAR_2->client.l_len);
 } else {
  FUNC_0("NULL file lock structure\n");
 }
}
