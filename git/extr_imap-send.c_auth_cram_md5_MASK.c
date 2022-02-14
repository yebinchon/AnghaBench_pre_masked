
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct imap_store {TYPE_2__* imap; } ;
struct imap_cmd {int dummy; } ;
struct TYPE_6__ {int pass; int user; } ;
struct TYPE_4__ {int sock; } ;
struct TYPE_5__ {TYPE_1__ buf; } ;


 char* FUNC_0 (char const*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 TYPE_3__ VAR_0 ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int FUNC_5(struct imap_store *VAR_1, struct imap_cmd *VAR_2, const char *VAR_3)
{
 int VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_0(VAR_3, VAR_0.user, VAR_0.pass);

 VAR_4 = FUNC_3(&VAR_1->imap->buf.sock, VAR_5, FUNC_4(VAR_5));
 if (VAR_4 != FUNC_4(VAR_5))
  return FUNC_1("IMAP error: sending response failed");

 FUNC_2(VAR_5);

 return 0;
}
