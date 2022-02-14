
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drbd_socket {void* sbuf; int socket; } ;
struct drbd_connection {int dummy; } ;
typedef enum drbd_packet { ____Placeholder_drbd_packet } drbd_packet ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drbd_connection*,int ,void*,unsigned int,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drbd_connection*,int,void*,int,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct drbd_connection *VAR_3, int VAR_4,
     struct drbd_socket *VAR_5, enum drbd_packet VAR_6,
     unsigned int VAR_7, void *VAR_8,
     unsigned int VAR_9)
{
 int VAR_10;
 int VAR_11;
 VAR_10 = VAR_8 ? VAR_0 : 0;

 VAR_7 += FUNC_2(VAR_3, VAR_4, VAR_5->sbuf, VAR_6,
          VAR_7 + VAR_9);
 VAR_11 = FUNC_0(VAR_3, VAR_5->socket, VAR_5->sbuf, VAR_7,
       VAR_10);
 if (VAR_8 && !VAR_11)
  VAR_11 = FUNC_0(VAR_3, VAR_5->socket, VAR_8, VAR_9, 0);


 if (!VAR_11 && (VAR_6 == VAR_1 || VAR_6 == VAR_2))
  FUNC_1(VAR_5->socket);

 return VAR_11;
}
