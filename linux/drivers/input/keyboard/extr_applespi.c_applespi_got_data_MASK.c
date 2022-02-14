
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct touchpad_protocol {unsigned int number_of_fingers; } ;
struct spi_packet {scalar_t__ flags; scalar_t__ device; int data; int length; int remaining; int offset; } ;
struct message {int length; struct touchpad_protocol touchpad; int keyboard; } ;
struct applespi_data {int read_active; int write_active; unsigned int saved_msg_len; TYPE_1__* spi; scalar_t__ msg_buf; int * rx_buffer; int cmd_msg_lock; int drain_complete; scalar_t__ drain; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct applespi_data*,struct spi_packet*) ;
 int FUNC_1 (struct applespi_data*,struct spi_packet*,struct message*) ;
 int FUNC_2 (struct applespi_data*,int *) ;
 int FUNC_3 (struct applespi_data*,int,int) ;
 int FUNC_4 (struct applespi_data*,int *,unsigned int) ;
 int FUNC_5 (int *,char*,int,...) ;
 int VAR_8 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__,int *,unsigned int) ;
 int FUNC_8 (struct applespi_data*,struct touchpad_protocol*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 size_t FUNC_11 (struct touchpad_protocol*,int ,unsigned int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct applespi_data *VAR_9)
{
 struct spi_packet *VAR_10;
 struct message *VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;


 if (!FUNC_4(VAR_9, VAR_9->rx_buffer,
     VAR_0)) {
  unsigned long VAR_16;

  FUNC_9(&VAR_9->cmd_msg_lock, VAR_16);

  if (VAR_9->drain) {
   VAR_9->read_active = 0;
   VAR_9->write_active = 0;

   FUNC_12(&VAR_9->drain_complete);
  }

  FUNC_10(&VAR_9->cmd_msg_lock, VAR_16);

  return;
 }

 VAR_10 = (struct spi_packet *)VAR_9->rx_buffer;

 FUNC_0(VAR_9, VAR_10);

 VAR_13 = FUNC_6(VAR_10->offset);
 VAR_14 = FUNC_6(VAR_10->remaining);
 VAR_15 = FUNC_6(VAR_10->length);

 if (VAR_15 > sizeof(VAR_10->data)) {
  FUNC_5(&VAR_9->spi->dev,
         "Received corrupted packet (invalid packet length %u)\n",
         VAR_15);
  goto msg_complete;
 }


 if (VAR_14 > 0 || VAR_13 > 0) {
  if (VAR_13 != VAR_9->saved_msg_len) {
   FUNC_5(&VAR_9->spi->dev,
          "Received unexpected offset (got %u, expected %u)\n",
          VAR_13, VAR_9->saved_msg_len);
   goto msg_complete;
  }

  if (VAR_13 + VAR_14 > VAR_2 * VAR_0) {
   FUNC_5(&VAR_9->spi->dev,
          "Received message too large (size %u)\n",
          VAR_13 + VAR_14);
   goto msg_complete;
  }

  if (VAR_13 + VAR_15 > VAR_2 * VAR_0) {
   FUNC_5(&VAR_9->spi->dev,
          "Received message too large (size %u)\n",
          VAR_13 + VAR_15);
   goto msg_complete;
  }

  FUNC_7(VAR_9->msg_buf + VAR_13, &VAR_10->data, VAR_15);
  VAR_9->saved_msg_len += VAR_15;

  if (VAR_14 > 0)
   return;

  VAR_11 = (struct message *)VAR_9->msg_buf;
  VAR_12 = VAR_9->saved_msg_len;
 } else {
  VAR_11 = (struct message *)&VAR_10->data;
  VAR_12 = VAR_15;
 }


 if (!FUNC_4(VAR_9, (u8 *)VAR_11, VAR_12))
  goto msg_complete;

 if (FUNC_6(VAR_11->length) != VAR_12 - VAR_3 - 2) {
  FUNC_5(&VAR_9->spi->dev,
         "Received corrupted packet (invalid message length %u - expected %u)\n",
         FUNC_6(VAR_11->length),
         VAR_12 - VAR_3 - 2);
  goto msg_complete;
 }


 if (VAR_10->flags == VAR_6 &&
     VAR_10->device == VAR_4) {
  FUNC_2(VAR_9, &VAR_11->keyboard);

 } else if (VAR_10->flags == VAR_6 &&
     VAR_10->device == VAR_5) {
  struct touchpad_protocol *VAR_17;
  size_t VAR_18;

  VAR_17 = &VAR_11->touchpad;
  VAR_18 = FUNC_11(VAR_17, VAR_8, VAR_17->number_of_fingers);

  if (FUNC_6(VAR_11->length) + 2 != VAR_18) {
   FUNC_5(&VAR_9->spi->dev,
          "Received corrupted packet (invalid message length %u - num-fingers %u, tp-len %zu)\n",
          FUNC_6(VAR_11->length),
          VAR_17->number_of_fingers, VAR_18);
   goto msg_complete;
  }

  if (VAR_17->number_of_fingers > VAR_1) {
   FUNC_5(&VAR_9->spi->dev,
          "Number of reported fingers (%u) exceeds max (%u))\n",
          VAR_17->number_of_fingers,
          VAR_1);
   VAR_17->number_of_fingers = VAR_1;
  }

  FUNC_8(VAR_9, VAR_17);

 } else if (VAR_10->flags == VAR_7) {
  FUNC_1(VAR_9, VAR_10, VAR_11);
 }

msg_complete:
 VAR_9->saved_msg_len = 0;

 FUNC_3(VAR_9, VAR_10->flags == VAR_7,
         1);
}
