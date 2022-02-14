
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; } ;
struct TYPE_5__ {TYPE_1__ file; scalar_t__ oack_size; int timeout; int block_size; } ;
typedef TYPE_2__ tftp_connection_t ;


 char* VAR_0 ;
 char* FUNC_0 (char*,int ,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1 (tftp_connection_t *VAR_2) {
  VAR_0[0] = (VAR_1 >> 8) & 0xff;
  VAR_0[1] = VAR_1 & 0xff;
  char *VAR_3 = VAR_0 + 2;
  VAR_3 = FUNC_0 (VAR_0 + 2, VAR_2->block_size, VAR_2->timeout, VAR_2->oack_size ? VAR_2->file.size : -1);
  return VAR_3 - VAR_0;
}
