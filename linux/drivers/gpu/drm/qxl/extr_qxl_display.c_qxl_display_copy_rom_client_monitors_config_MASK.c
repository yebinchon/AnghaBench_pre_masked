
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct qxl_urect {scalar_t__ left; scalar_t__ top; scalar_t__ right; scalar_t__ bottom; } ;
struct qxl_head {scalar_t__ x; scalar_t__ y; scalar_t__ width; scalar_t__ height; scalar_t__ surface_id; int id; scalar_t__ flags; } ;
struct qxl_device {TYPE_3__* client_monitors_config; TYPE_2__* rom; } ;
struct TYPE_6__ {int count; int max_allowed; struct qxl_head* heads; } ;
struct TYPE_4__ {int count; struct qxl_urect* heads; } ;
struct TYPE_5__ {scalar_t__ client_monitors_config_crc; TYPE_1__ client_monitors_config; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int const*,int) ;
 scalar_t__ FUNC_2 (struct qxl_device*,int) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_3(struct qxl_device *VAR_5)
{
 int VAR_6;
 int VAR_7;
 uint32_t VAR_8;
 int VAR_9 = VAR_3;

 VAR_7 = VAR_5->rom->client_monitors_config.count;
 VAR_8 = FUNC_1(0, (const uint8_t *)&VAR_5->rom->client_monitors_config,
    sizeof(VAR_5->rom->client_monitors_config));
 if (VAR_8 != VAR_5->rom->client_monitors_config_crc)
  return VAR_0;
 if (!VAR_7) {
  FUNC_0("no client monitors configured\n");
  return VAR_9;
 }
 if (VAR_7 > VAR_4) {
  FUNC_0("client monitors list will be truncated: %d < %d\n",
         VAR_4, VAR_7);
  VAR_7 = VAR_4;
 } else {
  VAR_7 = VAR_5->rom->client_monitors_config.count;
 }
 if (VAR_5->client_monitors_config
       && (VAR_7 != VAR_5->client_monitors_config->count)) {
  VAR_9 = VAR_2;
 }
 if (FUNC_2(VAR_5, VAR_7)) {
  VAR_9 = VAR_1;
  return VAR_9;
 }

 VAR_5->client_monitors_config->max_allowed = VAR_4;
 for (VAR_6 = 0 ; VAR_6 < VAR_5->client_monitors_config->count ; ++VAR_6) {
  struct qxl_urect *VAR_10 =
   &VAR_5->rom->client_monitors_config.heads[VAR_6];
  struct qxl_head *VAR_11 =
   &VAR_5->client_monitors_config->heads[VAR_6];
  if (VAR_11->x != VAR_10->left) {
   VAR_11->x = VAR_10->left;
   VAR_9 = VAR_2;
  }
  if (VAR_11->y != VAR_10->top) {
   VAR_11->y = VAR_10->top;
   VAR_9 = VAR_2;
  }
  if (VAR_11->width != VAR_10->right - VAR_10->left) {
   VAR_11->width = VAR_10->right - VAR_10->left;
   VAR_9 = VAR_2;
  }
  if (VAR_11->height != VAR_10->bottom - VAR_10->top) {
   VAR_11->height = VAR_10->bottom - VAR_10->top;
   VAR_9 = VAR_2;
  }
  if (VAR_11->surface_id != 0) {
   VAR_11->surface_id = 0;
   VAR_9 = VAR_2;
  }
  if (VAR_11->id != VAR_6) {
   VAR_11->id = VAR_6;
   VAR_9 = VAR_2;
  }
  if (VAR_11->flags != 0) {
   VAR_11->flags = 0;
   VAR_9 = VAR_2;
  }
  FUNC_0("read %dx%d+%d+%d\n", VAR_11->width, VAR_11->height,
     VAR_11->x, VAR_11->y);
 }

 return VAR_9;
}
