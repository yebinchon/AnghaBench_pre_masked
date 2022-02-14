
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pos; int name; int fd; } ;
struct TYPE_7__ {TYPE_2__* netascii; TYPE_1__ file; } ;
typedef TYPE_3__ tftp_connection_t ;
typedef scalar_t__ ssize_t ;
struct TYPE_6__ {int unflushed_char; scalar_t__ rptr; scalar_t__ size; unsigned char* iobuff; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,unsigned char*,int ) ;
 int FUNC_2 (int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3 (tftp_connection_t *VAR_1) {
  unsigned char VAR_2;
  if (VAR_1->netascii->unflushed_char != 255) {
    VAR_2 = VAR_1->netascii->unflushed_char;
    VAR_1->netascii->unflushed_char = 255;
    return VAR_2;
  }
  if (VAR_1->netascii->rptr >= VAR_1->netascii->size) {
    ssize_t VAR_3 = FUNC_1 (VAR_1->file.fd, VAR_1->netascii->iobuff, VAR_0);
    if (VAR_3 < 0) {
      FUNC_2 (1, "Fail to read file '%s' from offset %lld. %m\n", VAR_1->file.name, VAR_1->file.pos);
      return -2;
    }
    VAR_1->file.pos += VAR_3;
    VAR_1->netascii->size = VAR_3;
    VAR_1->netascii->rptr = 0;
    if (!VAR_3) {
      return -1;
    }
  }
  FUNC_0 (VAR_1->netascii->rptr < VAR_1->netascii->size);
  VAR_2 = VAR_1->netascii->iobuff[VAR_1->netascii->rptr++];
  if (VAR_2 == '\n') {
    VAR_1->netascii->unflushed_char = '\n';
    return '\r';
  }
  if (VAR_2 == '\r') {
    VAR_1->netascii->unflushed_char = 0;
    return '\r';
  }
  return VAR_2;
}
