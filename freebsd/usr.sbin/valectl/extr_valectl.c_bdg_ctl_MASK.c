
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq {char* nr_name; int nr_cmd; int nr_arg2; int nr_arg1; int nr_tx_rings; char* nr_rx_rings; int nr_flags; int nr_rx_slots; int nr_ringid; int nr_tx_slots; int nr_version; } ;
typedef int nmr ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_0 ;



 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct nmreq*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int ,struct nmreq*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,struct nmreq*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_10(const char *VAR_8, int VAR_9, int VAR_10, char *VAR_11, int VAR_12)
{
 struct nmreq VAR_13;
 int VAR_14 = 0;
 int VAR_15 = FUNC_5("/dev/netmap", VAR_7);

 if (VAR_15 == -1) {
  FUNC_0("Unable to open /dev/netmap");
  return -1;
 }

 FUNC_2(&VAR_13, sizeof(VAR_13));
 VAR_13.nr_version = VAR_0;
 if (VAR_8 != ((void*)0))
  FUNC_9(VAR_13.nr_name, VAR_8, sizeof(VAR_13.nr_name)-1);
 VAR_13.nr_cmd = VAR_9;
 FUNC_6(VAR_11, &VAR_13);
 VAR_13.nr_arg2 = VAR_12;

 switch (VAR_9) {
 case 133:
 case 130:
  VAR_14 = FUNC_4(VAR_15, VAR_3, &VAR_13);
  if (VAR_14 == -1) {
   FUNC_1("Unable to %s %s", VAR_9 == 133 ? "delete":"create", VAR_8);
   FUNC_7(VAR_8);
  } else {
   FUNC_1("Success to %s %s", VAR_9 == 133 ? "delete":"create", VAR_8);
  }
  break;
 case 134:
 case 132:
  VAR_13.nr_flags = VAR_4;
  if (VAR_10 && VAR_10 != VAR_1) {
   VAR_13.nr_flags = VAR_5;
   VAR_10 = 0;
  }
  VAR_13.nr_arg1 = VAR_10;
  VAR_14 = FUNC_4(VAR_15, VAR_3, &VAR_13);
  if (VAR_14 == -1) {
   FUNC_1("Unable to %s %s to the bridge", VAR_9 ==
       132?"detach":"attach", VAR_8);
   FUNC_7(VAR_8);
  } else
   FUNC_1("Success to %s %s to the bridge", VAR_9 ==
       132?"detach":"attach", VAR_8);
  break;

 case 131:
  if (FUNC_8(VAR_13.nr_name)) {
   VAR_14 = FUNC_4(VAR_15, VAR_2, &VAR_13);
   if (VAR_14) {
    FUNC_1("Unable to obtain info for %s", VAR_8);
    FUNC_7(VAR_8);
   } else
    FUNC_0("%s at bridge:%d port:%d", VAR_8, VAR_13.nr_arg1,
        VAR_13.nr_arg2);
   break;
  }


  VAR_13.nr_arg1 = VAR_13.nr_arg2 = 0;
  for (; !FUNC_4(VAR_15, VAR_2, &VAR_13); VAR_13.nr_arg2++) {
   FUNC_0("bridge:%d port:%d %s", VAR_13.nr_arg1, VAR_13.nr_arg2,
       VAR_13.nr_name);
   VAR_13.nr_name[0] = '\0';
  }

  break;

 case 128:
 case 129:
  VAR_13.nr_flags |= VAR_13.nr_tx_slots ?
   VAR_6 : VAR_4;
  VAR_13.nr_ringid = VAR_13.nr_rx_slots;

  if (VAR_13.nr_flags == VAR_4)
   VAR_13.nr_arg1 = 1;
  else
   VAR_13.nr_arg1 = VAR_13.nr_tx_rings;

  VAR_14 = FUNC_4(VAR_15, VAR_3, &VAR_13);
  if (!VAR_14)
   FUNC_0("polling on %s %s", VAR_13.nr_name,
    VAR_9 == 128 ?
    "started" : "stopped");
  else
   FUNC_0("polling on %s %s (err %d)", VAR_13.nr_name,
    VAR_9 == 128 ?
    "couldn't start" : "couldn't stop", VAR_14);
  break;

 default:
  VAR_13.nr_cmd = VAR_13.nr_arg1 = VAR_13.nr_arg2 = 0;
  VAR_14 = FUNC_4(VAR_15, VAR_2, &VAR_13);
  if (VAR_14) {
   FUNC_1("Unable to get if info for %s", VAR_8);
   FUNC_7(VAR_8);
  } else
   FUNC_0("%s: %d queues.", VAR_8, VAR_13.nr_rx_rings);
  break;
 }
 FUNC_3(VAR_15);
 return VAR_14;
}
