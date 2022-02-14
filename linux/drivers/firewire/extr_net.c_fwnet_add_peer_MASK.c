
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct fwnet_peer {int guid; int peer_link; int node_id; int generation; int speed; int max_payload; scalar_t__ datagram_label; scalar_t__ pdg_size; int pd_list; struct fwnet_device* dev; } ;
struct fwnet_device {int lock; int peer_count; int peer_list; } ;
struct fw_unit {int device; } ;
struct fw_device {int* config_rom; int node_id; int generation; int max_rec; int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct fwnet_peer*) ;
 int FUNC_2 (int ,int ) ;
 struct fwnet_peer* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct fwnet_device*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct fwnet_device *VAR_2,
     struct fw_unit *VAR_3, struct fw_device *VAR_4)
{
 struct fwnet_peer *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_1(&VAR_3->device, VAR_5);

 VAR_5->dev = VAR_2;
 VAR_5->guid = (u64)VAR_4->config_rom[3] << 32 | VAR_4->config_rom[4];
 FUNC_0(&VAR_5->pd_list);
 VAR_5->pdg_size = 0;
 VAR_5->datagram_label = 0;
 VAR_5->speed = VAR_4->max_speed;
 VAR_5->max_payload = FUNC_2(VAR_4->max_rec, VAR_5->speed);

 VAR_5->generation = VAR_4->generation;
 FUNC_6();
 VAR_5->node_id = VAR_4->node_id;

 FUNC_7(&VAR_2->lock);
 FUNC_4(&VAR_5->peer_link, &VAR_2->peer_list);
 VAR_2->peer_count++;
 FUNC_5(VAR_2);
 FUNC_8(&VAR_2->lock);

 return 0;
}
