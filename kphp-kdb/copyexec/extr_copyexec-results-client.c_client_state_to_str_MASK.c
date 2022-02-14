
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum client_state { ____Placeholder_client_state } client_state ;







char *FUNC_0 (enum client_state VAR_0) {
  switch (VAR_0) {
    case 128: return "startup";
    case 129: return "handshake_sent";
    case 130: return "handshake_received";
    case 131: return "data_sent";
    default: return "unknown";
  }
}
